#include "bmp.h"
#include "image.h"
#include "log.h"
#include <stdio.h>

int main(int argc, char **argv) {
  struct ImageRgb8 src;
  struct ImageRgb8 dst;

  if (argc < 3) {
    log_err("Not enough arguments");
    return __LINE__;
  }

  from_bmp_path(&src, argv[1]);

  /* BMP сохраняет изображения в BGR и снизу вверх */
  /* if (image_bgr_to_rgb(&src)) return __LINE__;
  image_mirror_v(&src);
  if (image_rotate_clockwise(&src, &dst)) return __LINE__;

  if (image_bgr_to_rgb(&dst)) return __LINE__;
  image_mirror_v(&dst); */
  if (image_rotate_counter_clockwise(&src, &dst)) return __LINE__;
  if (to_bmp_path(&dst, argv[2])) return __LINE__;

  destroy_image(&src);
  destroy_image(&dst);
  return 0;
}
