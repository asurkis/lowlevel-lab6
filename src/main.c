#include "log.h"
#include "image.h"
#include "bmp.h"
#include <stdio.h>

int main() {
  struct ImageRgb8 image;
  from_bmp_path(&image, "input.bmp");
  printf("%d %d %d\n", image.pixels[0].r, image.pixels[0].g, image.pixels[0].b);
  to_bmp_path(&image, "output.bmp");
  return 0;
}
