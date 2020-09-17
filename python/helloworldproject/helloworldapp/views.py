from django.shortcuts import render
from django.http import HttpResponse

def helloworldfunc(reauest):
    return HttpResponse('hello world')