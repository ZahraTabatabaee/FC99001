# Generated by Django 3.1.4 on 2020-12-22 12:03

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('Blog', '0003_user_birthplace'),
    ]

    operations = [
        migrations.CreateModel(
            name='Correct',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('correctbook', models.CharField(blank=True, max_length=255, null=True)),
                ('correctcolor', models.CharField(blank=True, max_length=255, null=True)),
                ('correctbirthplace', models.CharField(blank=True, max_length=255, null=True)),
            ],
        ),
    ]
