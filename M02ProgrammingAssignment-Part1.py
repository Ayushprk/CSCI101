cookies = 0.0
sugar = 0.0
butter = 0.0
flour = 0.0

COOKIES_RECIPE = 48.0
SUGAR_RECIPE = 1.5
BUTTER_RECIPE = 1.0
FLOUR_RECIPE = 2.75

cookies = float(input("Enter the number of cookies: "))

sugar = (cookies * SUGAR_RECIPE) / COOKIES_RECIPE

butter = (cookies * BUTTER_RECIPE) / COOKIES_RECIPE

flour = (cookies * FLOUR_RECIPE) / COOKIES_RECIPE

print ("To make", cookies, "cookies, you will need:")
print (format(sugar, '.2f'), "cups of sugar")
print (format(butter, '.2f'), "cups of butter")
print (format(flour, '.2f'), "cups of flour")