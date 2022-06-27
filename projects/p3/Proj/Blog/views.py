from django.shortcuts import render
from django.http.response import HttpResponse
# Create your views here.

def index(request):
    return render(request, 'index.html')

def form (request):
    if request.method == "GET":
        print("{}".format(request.method))
        mylist = {"your_neme" : "hello world","my_items":["item","item2","item3"]}
        return render(request, 'form.html' , context = mylist)
    if request.method == "POST":
        print("hello")
        b = int(request.POST["int"])
        User(username= request.POST["username"], password= request.POST["password"])
        mylist = function(b)
        mydic = {"my_numbers" : mylist}
        # print("username : {}".format(request.POST["username"]))
        # return HttpResponse(""username : {}".format(request.POST["username"])")
        return render(request , "form.html" , context= mydic)
def function(x):
    list = []
    for i in range(2,x):
        if i % 5 == 0 :
            list.append(i)
    return list