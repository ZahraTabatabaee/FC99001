# Generated by Django 3.1.4 on 2020-12-26 18:39

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('Blog', '0004_correct'),
    ]

    operations = [
        migrations.DeleteModel(
            name='Correct',
        ),
        migrations.RenameField(
            model_name='user',
            old_name='birthplace',
            new_name='biography',
        ),
        migrations.RenameField(
            model_name='user',
            old_name='book',
            new_name='description',
        ),
        migrations.RenameField(
            model_name='user',
            old_name='color',
            new_name='name',
        ),
        migrations.AddField(
            model_name='user',
            name='paintinglink',
            field=models.CharField(blank=True, max_length=255, null=True),
        ),
        migrations.AddField(
            model_name='user',
            name='paintingname',
            field=models.CharField(blank=True, max_length=255, null=True),
        ),
    ]
