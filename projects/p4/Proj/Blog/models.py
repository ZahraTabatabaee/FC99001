from django.db import models

class User(models.Model):
    name = models.CharField(max_length=255, null = True, blank = True)
    biography = models.TextField(max_length=255, null = True, blank = True)
    paintingname = models.CharField(max_length=255, null = True, blank = True)
    description = models.TextField(max_length=255, null = True, blank = True)
    paintinglink = models.CharField(max_length=255, null = True, blank = True)





    def __str__(self):
        return self.name

