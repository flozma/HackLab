#!/usr/bin/env python3
import random
import time

if __name__ == "__main__":
    print("Welcome to flag-shop!")
    print("Find the flag among 10 items and buy it!")
    print("There are 50 rounds.")

    items = [
        "flag",
        "grape",
        "orange",
        "apple",
        "banana",
        "mango",
        "melon",
        "pineapple",
        "peach",
        "strawberry"
    ]

    start = time.time()
    for round in range(50):
        random.shuffle(items)
        print()
        for idx, item in enumerate(items):
            print(f"{idx}. {item}")
        print("Which item do you want to buy?")
        choice = int(input("> "))

        if items[choice] != "flag":
            print("Failed to get flag...")
            exit()
    end = time.time()

    if end - start >= 25:
        print("TIME OUT")
        exit()
    
    with open("flag", "r") as f:
        print(f.read())