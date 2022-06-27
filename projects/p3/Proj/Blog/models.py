from django.db import models

# Create your models here.

class User(models.Model):
    username = models.CharField(null= True, blank= True)
    password = models.CharField(null= True, blank= True)