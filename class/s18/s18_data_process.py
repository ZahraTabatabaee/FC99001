FILENAME = "children-per-woman-UN.csv"

def read_file_lines(file_name):
    file = open(file_name)
    #lines = file.readlines() returns a list of lines
    entire_file = file.read() # return the entire file as a string
    lines = entire_file.splitlines()
    lines = lines[1:]
    return lines

def get_country_max_birth_rate(country, lines):
    max_rate = 0.0
    max_rate_year = 0
    country = country.lower()
    for line in lines:
        if line.lower().find(country) >= 0:
            _, year, rate = get_line_info(line)
            if rate > max_rate:
                max_rate = rate
                max_rate_year = year
    return max_rate, max_rate_year

def get_line_info(line):
    tokens = line.split(",")
    country = tokens[0]
    year = int(tokens[2])
    rate = float(tokens[3])
    return country, year, rate


def get_all_countries_max_birth_rate(lines):
    result = {}
    for line in lines:
        country, year, rate = get_line_info(line)
        if country in result:
            _, current_rate = result[country]
            if rate > current_rate:
                result[country] = year, rate
        else:
            result[country] = year, rate
    return result

lines = read_file_lines(FILENAME)

result = get_all_countries_max_birth_rate(lines)
for key,value in result.items():
    out_str = "country: {} year, rate: {}".format(key, value)
    print(out_str)

# while True:
#     country = input("Country? ")
#     max_rate, max_rate_year = get_country_max_birth_rate(country, lines)
#     print("{} had the maximum birth rate at year {} with rate {}" \
#         .format(country,max_rate_year, max_rate))
