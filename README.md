1. my_strlen
Prototype: size_t strlen(const char *str);
Description: Returns the length of the string str, excluding the null terminator '\0'.

2. my_strcpy
Prototype: char *strcpy(char *dest, const char *src);
Description: Copies the string pointed to by src, including the null terminator, to the buffer pointed to by dest.

3. my_strncpy
Prototype: char *strncpy(char *dest, const char *src, size_t n);
Description: Copies up to n characters from the string pointed to by src to dest. If src is less than n characters long, the remainder of dest will be padded with null bytes.

4. my_strcat
Prototype: char *strcat(char *dest, const char *src);
Description: Appends the string src to the end of the string dest. The dest string must have enough space to hold both strings.

5. my_strncat
Prototype: char *strncat(char *dest, const char *src, size_t n);
Description: Appends up to n characters from the string src to the end of the string dest. The resulting string is always null-terminated.

6. my_strcmp
Prototype: int strcmp(const char *str1, const char *str2);
Description: Compares the string str1 with str2. Returns an integer less than, equal to, or greater than zero if str1 is found to be less than, to match, or be greater than str2.

7. my_strncmp
Prototype: int strncmp(const char *str1, const char *str2, size_t n);
Description: Compares up to n characters of the string str1 with str2. Returns an integer less than, equal to, or greater than zero if str1 is found to be less than,
to match, or be greater than str2.

8. my_strchr
Prototype: char *strchr(const char *str, int c);
Description: Returns a pointer to the first occurrence of the character c in the string str, or NULL if the character is not found.

9. my_strrchr
Prototype: char *strrchr(const char *str, int c);
Description: Returns a pointer to the last occurrence of the character c in the string str, or NULL if the character is not found.

10. my_strstr
Prototype: char *strstr(const char *str, const char *substr);
Description: Finds the first occurrence of the substring substr in the string str. Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

11. my_atoi
Prototype: int atoi(const char *str);
Description: Converts the initial portion of a string to an int.
Skips leading whitespace and processes optional + or - signs.
Stops conversion at the first non-numeric character.
Returns 0 if no valid conversion is found or the string starts with non-numeric characters.
