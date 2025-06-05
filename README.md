# Maths2

**Maths2** is a modular C math library designed to complement the standard `<math.h>` by providing additional utilities for vector math, geometry, easing functions, and random number generation.

## ✨ Features

* **2D/3D Vectors**: Basic operations (add, subtract, dot/cross product), normalization, distance, etc.
* **2D/3D Geometry**: Support for points, circles, rectangles, spheres, bounding boxes, overlap checks.
* **Raycasting**: Generate and manipulate 2D/3D rays, calculate intersection points.
* **Easing Functions**: Smooth transition functions (quadratic, cubic, bounce, back).
* **Random Number Generator (RNG)**: RNG based on **XorShift** with **SplitMix64** seed initialization and statistical test support.
* **Utility Math**: Clamp, normalization, sign, angle conversions, fast inverse square root.

## 🔧 Build

Build with Make:

```bash
make
```

## 💡 Usage

Include in your C project:

```c
#include "maths2.h"
#include "maths2_geometry.h"
#include "maths2_rng.h"
```

Example: create a rectangle and test a point inside:

```c
t_rect rect = rect_new(vec2_new(0, 0), vec2_new(100, 100));
bool inside = point_in_rect(vec2_new(50, 50), rect);
```

Example: use the RNG:

```c
t_rng_state rng;
rng_init(&rng, 42);
int val = rng_int_range(&rng, 0, 100);
```

## 🔎 Testing

Python and Bash scripts are provided in `tests/` to analyze RNG quality using statistical methods (mean, entropy, chi-squared, etc.):

```bash
cd tests
bash random.bash 100 100
```

## 📁 Structure

* `includes/`: Public and internal headers.
* `src/`: Source code organized by module.
* `tests/`: RNG test scripts.

---

This project is released under the MIT license. See `LICENSE` for details.

---
