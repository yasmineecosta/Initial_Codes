# tuple cant change, no matter what
coordinates_tuple = (4, 5)
coordinates_list = [4, 5]
coordinates = [(4, 5), (6, 7), (80, 34)]
coordinates_list[0] = 10


# print(coordinates_tuple[0])
# print(coordinates_list[0])

# FUNCTIONS

def say_hi():
    print("Hello User")


# out of function
def say_ok(name):
    print("Hello " + name)


def say_age(name, age):
    print("Hello " + name + ", you are " + str(age))


print("Top")
say_hi()
say_ok("Mike")
say_age("Maino", 20)
print("Bottom")


def cube(num):
    print("code")
    return num * num * num
    # print("coode") nao vai ser printado, pq se encerra no return


result = cube(4)
print(result)

# IF STATEMENT
is_male = True
is_tall = True

if is_male and is_tall:
    print("You are a male and tall")
elif is_male and not (is_tall):
    print("You are a short male")
elif not (is_male) and is_tall:
    print("You're not a male but u tall")
else:
    print("You are neither male nor tall")


def max_num(num1, num2, num3):
    if num1 >= num2 and num1 >= num3:
        return num1
    elif num2 >= num1 and num2 >= num3:
        return num2
    else:
        return num3


# can also compare bool or string in the if section
print(max_num(3, 4, 5))
