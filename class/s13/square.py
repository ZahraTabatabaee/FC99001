import turtle
import random
MINIMUM_SIDE = 10
def build_square(t, SIDE, shorten_by, angle):
    if SIDE > MINIMUM_SIDE:
        for i in range(4):
            set_random_color(t)
        t.forward(SIDE)
        new_SIDE = SIDE - shorten_by
        t.right(angle)
        build_square(t, new_SIDE, shorten_by, angle)
        t.right(angle)


def set_random_color(t):
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    t.pencolor(r, g, b)



square = turtle.Turtle()
square.hideturtle()
square.setheading(90)
turtle.colormode(255)

square.speed(5)
build_square(square, 200, 5, 90)
turtle.mainloop()