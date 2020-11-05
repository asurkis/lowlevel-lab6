#include "image.h"

#include <stdlib.h>

int create_image_rgb8(struct ImageRgb8 *image) {
  image->pixels = malloc(image->width * image->height * sizeof(struct Rgb8));
  return image->pixels ? 0 : 1;
}

void destroy_image_rgb8(struct ImageRgb8 *image) {
  free(image->pixels);
}
