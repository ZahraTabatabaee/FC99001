from django.shortcuts import render
from django.shortcuts import HttpResponse
from . models import *

def entry(request):
    return render(request, 'entry.html')

def search(request):
    if request.method == "GET":
        a = User.objects.all().values_list("name", flat=True)
        print(a)
        output = { "result": a}
        return render(request, "search.html", context=output)
    if request.method == "POST":
        name = request.POST['inp_name']
        a = User.objects.filter(name=name)
        if len(a) == 0 :
            return render(request, "notfind.html")
        output = {"result": a}
        return render(request, "result.html", context=output)

def add(request):
    if request.method == "GET":
        a = User.objects.all().values_list("name", flat=True)
        print(a)
        output = { "result": a}
        return render(request, "add.html", context=output)
    elif request.method == "POST":
        name = request.POST['inp_name']
        print(name)
        biography = request.POST['inp_biography']
        print(biography)
        paintingname = request.POST['inp_paintingname']
        print(paintingname)
        description = request.POST['inp_description']
        print(description)
        paintinglink = request.POST['inp_paintinglink']
        print(paintinglink)
        a = User.objects.filter(paintingname=paintingname)
        resp=" نقاش و نقاشی انتخابی شما تکراری است، لطقانقاشی دیگری را انتخاب کنید!"
        if len(a) == 0:
            user = User.objects.create(name=name, biography=biography, paintingname=paintingname, description=description, paintinglink=paintinglink)
            resp="نقاش مورد نظر شما به لیست اضافه شد "
        print(a)

        return render(request, "add.html",context={"response":resp})
