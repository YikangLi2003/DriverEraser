#ifndef PATH_H
#define PATH_H

#include "uuid4.h"

typedef char Path[260];

bool build_full_file_path(Path result, const Path erase_dir, const Uuid4 filename);

#endif