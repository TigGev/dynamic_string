#include "string.h"
#include "stdlib.h"
size_t my_strlen(const char *str) {
    int i = 0;
    while(str[i]) {
        ++i;
    }
    return --i;
}

char* my_strcpy(char *dest, const char *src) {
    dest = (char*)realloc(dest,my_strlen(src) + 1);
	int i=0;
	while(src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

char* my_strncpy(char *dest, const char *src, size_t n) {
    dest = (char*)realloc(dest,n + 1);
    int i = 0;
    while (i != n && src[i] != '\0') {
        dest[i] = src[i];
		i++;
    }
    dest[i] = '\0';
    return dest;
}

char* my_strcat(char *dest, const char *src) {
    size_t dest_size = my_strlen(dest);
    dest = (char*)realloc(dest, dest_size + my_strlen(src) + 1);
    while(*src) {
        dest[dest_size++] = *src;
        src++;
    }
    dest[dest_size] = 0;
    return dest;
}

char* my_strncat(char *dest, const char *src, size_t n) {
    size_t dest_size = my_strlen(dest);
    dest = (char*)realloc(dest, dest_size + n + 1);
    while(*src && n) {
        dest[dest_size++] = *src;
        src++;
        n--;
    }
    dest[dest_size] = 0;
    return dest;
}

int my_strcmp(const char *str1, const char *str2) {
	while (*str1 == *str2) {
		if(*str1 == '\0') return 0;
		str1++;
		str2++;
	}
	if(*str1 > *str2) return 1;
	return -1;
}

int my_strncmp(const char *str1, const char *str2, size_t n) {
	const char * tmp = str1;
        while (*str1 == *str2) {
                if(((str1 - tmp) == (n-1)) || *str1 == '\0') return 0;
                str1++;
                str2++;
        }
        if(*str1 > *str2) return 1;
        return -1;
}
char* my_strchr(const char *str, char c) {
    while(*str != c) {
        if(!(*str)) return NULL;
        str++;
    }
    return (char*)str;
}

char* my_strrchr(const char *str, char c) {
    size_t size = strlen(str);
    while (size > 0) {
        if(str[size] == c) return (char*)str+size;
        size--;
    }   
    return NULL;
}
char* my_strstr(const char *str, const char *substr) {
    if (*substr == '\0') return (char*)str;
    const char *string = my_strchr(str,*substr);
    if(!string) return NULL;
    while(*string) {
        if(!my_strncmp(string,substr,my_strlen(substr)))  return (char*)string;
        string++;
    }
    return NULL;
}

int my_atoi(const char *str) {
	int num = 0;
	while(*str != '\0' && *str >= '0' && *str <= '9') {
		num *= 10;
		num += (*str - 48);
		str++;
	}
	return num;
}