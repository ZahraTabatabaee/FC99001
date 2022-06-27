import turtle

def draw_square(t, l):
    t.forward(l)
    t.right(90)
    t.forward(l)
    t.right(90)
    t.forward(l)
    t.right(90)
    t.forward(l)
    

t = turtle.Turtle()
draw_square(t, 200)
turtle.mainloop()


def draw_square1(t, l):
    for i in range(4):
        t.forward(l)
        t.right(90)
    return draw_square1

t = turtle.Turtle()
draw_square1(t, 200)
turtle.mainloop()

def draw_polygon(t, l, n):
    angle = 360/n
    for i in range(n):
        t.forward(l)
        t.right(angle)
    return draw_polygon


t = turtle.Turtle()
draw_polygon(t, 100, 6)
turtle.mainloop()

t = turtle.Turtle()
draw_square1(t, 200)
turtle.mainloop()



alex = turtle.Turtle()
draw_square1(alex, 50)
alex.penup()
alex.setpos(50, 50)
alex.pendown()
draw_polygon(alex,40,5)


alex.speed(5)

alex.pencolor('blue')
alex.pensize(5)
for i in range(10, 200, 20):
    alex.circle(i)




turtle.mainloop()