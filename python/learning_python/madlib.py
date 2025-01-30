
color = input("Enter a color: ")
plural_noun = input("Enter a plural noun: ")
person = input("Enter a name: ")

# print("Roses are {color}")
# print("{plural noun} are blue")
# print("I love {person}")

print("Roses are " + color)
print(plural_noun + " are blue")
print("I love " + person)

def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
    print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print_hi('name')
