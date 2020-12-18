import csv
from os import read, write
import matplotlib.pyplot as plt
import numpy as np

input = "/Users/ojipan/Practice/python/csv/test.csv"
output = "/Users/ojipan/Practice/python/csv/output.csv"

with open(input, mode = "r", newline = '') as f:
    reader = csv.reader(f)
    for row in reader:
        print(row)

with open(output, mode = "w") as f:
    writer = csv.writer(f)
    writer.writerow(data)