midterm = float(input("Enter midterm grade: "))
final = float(input("Enter final grade: "))
average = midterm * 0.4 + final * 0.6

if average >= 60:
    print("Passed! Average:", average)
else:
    print("Failed. Average:", average)
