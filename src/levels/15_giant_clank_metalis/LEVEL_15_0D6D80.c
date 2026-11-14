/* LEVEL_15:0x0D6D80 -- placement copy of LEVEL_01_111578.c: builds the ray segment from the origin along the direction scaled by the first argument and tests it against the triangle prism, passing the hit output through. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct {
    char pad0[8];
    V4 pl;
    V4 e[3];
} Tri;

typedef struct {
    float o[3];
    float pad[3];
    float d[3];
} Ray;

extern int func_0D6B90(Tri *tri, Ray *ray, float *out);

int func_0D6D80(float t, Tri *tri, float *origin, float *dir, float *out)
{
    Ray ray;

    ray.pad[0] = origin[0] + t * dir[0];
    ray.d[1] = t * dir[1];
    ray.d[2] = t * dir[2];
    ray.pad[1] = origin[1] + t * dir[1];
    ray.o[0] = origin[0];
    ray.o[1] = origin[1];
    ray.pad[2] = origin[2] + t * dir[2];
    ray.o[2] = origin[2];
    ray.d[0] = t * dir[0];
    return func_0D6B90(tri, &ray, out);
}
