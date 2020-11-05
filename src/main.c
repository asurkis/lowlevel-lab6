#include "bmp.h"
#include "image.h"
#include "log.h"
#include <stdio.h>

int main() {
  struct ImageRgb8 src;
  struct ImageRgb8 dst;
  from_bmp_path(&src, "input.bmp");

  /* BMP сохраняет изображения в BGR и снизу вверх */
  image_bgr_to_rgb(&src);
  image_mirror_v(&src);
  image_rotate_clockwise(&src, &dst);

  image_bgr_to_rgb(&dst);
  image_mirror_v(&dst);
  to_bmp_path(&dst, "output.bmp");

  destroy_image(&src);
  destroy_image(&dst);
  return 0;
}
