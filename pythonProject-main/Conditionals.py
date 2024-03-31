name = "Super Raj"

if name.lower() == "tom":
    print("That's my name too!")
elif name.lower() == "santa":
    print("That's a funny name.")
else:
    print(f"Hello {name}! That's a cool name!")
    if name.lower().startswith("super"):
        print("Do you really have superpowers?")
print("Nice to meet you!")
