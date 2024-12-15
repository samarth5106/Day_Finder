# Day Finder Program

## Description
This program calculates the day of the week for a given date (day, month, year) within the range 1900 to 2099. It uses a formula based on codes assigned to months, years, and days of the week. The program considers leap years and performs necessary validations for valid input.

## Features
- Input validation for:
  - Years (should be between 1900 and 2099).
  - Months (should be between 1 and 12).
  - Days (should not exceed the maximum valid days in the given month).
- Calculation of day of the week for any valid date.
- Displays an error message for invalid inputs.

## How It Works
1. **Input Validation:**
   - Checks if the year, month, and day are within valid ranges.
   - Ensures February doesn't exceed 29 days in leap years or 28 days otherwise.
2. **Day Calculation:**
   - Assigns a code to the day, month, and year.
   - Computes the sum of these codes to determine the day of the week.
   - Accounts for leap years when calculating the sum.
3. **Output:**
   - Prints the name of the day corresponding to the calculated value.

## Input Format
- The program prompts the user to enter:
  1. Day (e.g., 15)
  2. Month (e.g., 3 for March)
  3. Year (e.g., 2024)

## Output Format
- For valid inputs, it displays:
  ```
  The day on given date is : [Day of the Week]
  ```
- For invalid inputs, it displays appropriate error messages, such as:
  - "Day name of that year can't be displayed" (for invalid years)
  - "Invalid Month" (for months not in the range 1-12)
  - "Invalid date" (for invalid day numbers)

## Example
### Input:
```
Enter day number: 15
Enter month number: 8
Enter year number: 2023
```
### Output:
```
The day on given date is : Tuesday
```

## Code Overview
- **Functions and Logic:**
  - The program uses modular arithmetic to assign codes to days and years.
  - A lookup table is used to assign month codes.
  - Conditional statements handle leap years and adjust calculations accordingly.
- **Error Handling:**
  - Input is validated for correct ranges.
  - Outputs meaningful messages for incorrect inputs.

## How to Run
1. Compile the code using any C compiler (e.g., GCC):
   ```
   gcc day_finder.c -o day_finder
   ```
2. Run the compiled program:
   ```
   ./day_finder
   ```
3. Follow the prompts to input the day, month, and year.

## Limitations
- Only supports years from 1900 to 2099.
- Doesn't account for historical calendar changes (e.g., Gregorian calendar adjustments).

## Future Improvements
- Extend the year range beyond 1900-2099.
- Add support for historical dates and different calendar systems.
- Implement a graphical user interface (GUI) for easier interaction.

## Contributing
Feel free to fork this repository and submit pull requests for improvements or additional features.

