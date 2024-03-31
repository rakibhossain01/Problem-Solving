s = {2, 3, 5, 11}
print(s)
print(s.add(2))

x = ([1, 2, 3], 5)
print(x)
x[0][1] = 4
print(x)

all_caps = "HOW ARE YOU TODAY?"
print(all_caps)
new_str = all_caps.lower()
print(new_str)

print(all_caps.split())
print(all_caps.count("O"))
print(list(all_caps))

print("".join(all_caps))
print("-".join(all_caps))
print("".join(all_caps).lower().split())
