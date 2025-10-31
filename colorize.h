#ifndef COLORIZE_H
#define COLORIZE_H

typedef enum {
  blue = 44,
  yellow = 43,
  green = 42,
  red = 41,
  gray = 40,
} COLOR;

typedef struct {
  char ref;
  char steps[7][100];
} Letter;

extern const int step_len;
extern const Letter letters[];
extern int letters_len;
int search_letter(char letter);

void colorize(char *string);

#endif
