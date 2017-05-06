import csv
import quandl

dataset = 'SSE/GGQ1'

df = quandl.get(dataset)

filename = 'google_stocks.csv'

df.to_csv(filename, sep='\t', encoding = 'utf-8')

print "Data is copied to local file"
