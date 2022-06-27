import turtle
import random
MINIMUM_SIDE = 10
def build_triangle(t, SIDE, shorten_by, angle):
    if SIDE > MINIMUM_SIDE:
        set_random_color(t)
        t.forward(SIDE)
        new_SIDE = SIDE - shorten_by
        t.right(angle)
        build_triangle(t, new_SIDE, shorten_by, angle)
        t.right(angle)


def set_random_color(t):
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    t.pencolor(r, g, b)



triangle = turtle.Turtle()
triangle.hideturtle()
triangle.setheading(90)
turtle.colormode(255)

triangle.speed(5)
build_triangle(triangle, 200, 5, 120)
turtle.mainloop()