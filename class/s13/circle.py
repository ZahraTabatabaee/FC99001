import turtle
import random
import math

def set_random_color(t):
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    t.pencolor(r, g, b)


def draw_circle(t , radius):
    t.penup()
    for i in range(0,360*5,5):
        
        x = radius*math.cos(i*math.pi/180)
        y = radius*math.sin(i*math.pi/180)
        t.pendown()
        t.setpos(x,y)
        t.penup()
        radius=radius*0.99
        
        set_random_color(t)


circle = turtle.Turtle()
wn=turtle.Screen()
wn.bgcolor("black")
circle.pensize(5)
circle.hideturtle()
circle.setheading(90)
turtle.colormode(255)

circle.speed(5)
draw_circle(circle,400)
turtle.mainloop()
