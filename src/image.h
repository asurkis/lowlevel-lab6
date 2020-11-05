#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <stddef.h>
#include <stdint.h>

struct Rgb8 {
  #define E(t, n) t n;
  #include "Rgb8.inc"
  #undef E
};

typedef struct Rgb8 *PRgb8;

struct ImageRgb8 {
  #define E(t, n) t n;
  #include "ImageRgb8.inc"
  #undef E
};

int create_image_rgb8(struct ImageRgb8 *);
void destroy_image_rgb8(struct ImageRgb8 *);

#endif
