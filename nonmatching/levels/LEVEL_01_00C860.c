/* Candidate for LEVEL_01.REL:0x00C860.
 * It traverses spatial cells, transforms triangle vertices relative to a
 * position, and forwards triangles that intersect a padded view volume.
 * The field names and helper signatures are provisional.
 */

typedef unsigned short u16;
typedef struct { float x, y, z; } Vec3;

typedef struct {
    u16 vertex[3];
    unsigned char pad[0x48 - 6];
    u16 flags;
    u16 tail;
} Triangle;

typedef struct {
    unsigned char pad0[8];
    Vec3 *vertices;
    Triangle *triangles;
    u16 *cell_counts;
    u16 **cell_lists;
} Mesh;

typedef struct {
    unsigned char pad0[0x18];
    Vec3 position;
} Object;

typedef struct {
    unsigned char pad0[0x40];
    float radius;
    unsigned char pad1[8];
    float forward;
    unsigned char pad2[0x5C - 0x50];
    Vec3 region_a;
    Vec3 region_b;
} View;

typedef struct {
    int x_start;
    int x_end;
    int x_step;
    int y_start;
    int y_end;
    int y_step;
    int z_start;
    int z_end;
} CellRange;

typedef struct {
    float local[9];
    float projected[9];
} TriangleWorkspace;

typedef struct {
    CellRange range;
    Mesh *mesh;
    Triangle *triangles;
    int x;
    u16 *count_row;
    u16 **list_row;
    int z;
} TraversalState;

extern int func_113850(int *, int *, int *, int *, int *, int *, int *, int *,
                       Mesh *, Vec3 *, Vec3 *);
extern void func_126D38(float *, View *, float *, int);
extern void func_00D858(View *, Object *, float *);
extern float fabsf(float);

void func_00C860(View *view, Object *object, Mesh *mesh)
{
    TriangleWorkspace work;
    TraversalState state;
    int y;
    u16 *indices;
    unsigned int remaining;
    Triangle *triangle;
    Vec3 *vertices;
    Vec3 *vertex_a;
    Vec3 *vertex_b;
    Vec3 *vertex_c;
    float half = 0.5f;
    float radius;
    float far_radius;
    float ab_min_x, ab_min_y, ab_min_z;
    float ab_max_x, ab_max_y, ab_max_z;
    float min_x, min_y, min_z;
    float max_x, max_y, max_z;
    int outside;

    state.mesh = mesh;
    if (!func_113850(&state.range.x_start, &state.range.x_end, &state.range.x_step,
                     &state.range.y_start, &state.range.y_end, &state.range.y_step,
                     &state.range.z_start, &state.range.z_end,
                     state.mesh, &view->region_a, &view->region_b))
        return;

    state.triangles = state.mesh->triangles;
    vertices = state.mesh->vertices;
    for (state.x = state.range.x_start; state.x != state.range.x_end;
         state.x += state.range.x_step) {
        for (y = state.range.y_start; y != state.range.y_end; y += state.range.y_step) {
            state.count_row = state.mesh->cell_counts + state.x + y;
            state.list_row = state.mesh->cell_lists + state.x + y;
            for (state.z = state.range.z_start; state.z != state.range.z_end; ++state.z) {
                remaining = state.count_row[state.z];
                indices = state.list_row[state.z];
                while (remaining != 0) {
                    triangle = &state.triangles[*indices];
                    if ((triangle->flags & 0x10) == 0) {
                        vertex_a = &vertices[triangle->vertex[0]];
                        vertex_b = &vertices[triangle->vertex[1]];
                        vertex_c = &vertices[triangle->vertex[2]];
                        work.local[0] = vertex_a->x - object->position.x;
                        work.local[1] = vertex_a->y - object->position.y;
                        work.local[2] = vertex_a->z - object->position.z;
                        work.local[3] = vertex_b->x - object->position.x;
                        work.local[4] = vertex_b->y - object->position.y;
                        work.local[5] = vertex_b->z - object->position.z;
                        work.local[6] = vertex_c->x - object->position.x;
                        work.local[7] = vertex_c->y - object->position.y;
                        work.local[8] = vertex_c->z - object->position.z;

                        func_126D38(&work.projected[0], view, &work.local[0], 0);
                        func_126D38(&work.projected[3], view, &work.local[3], 0);
                        func_126D38(&work.projected[6], view, &work.local[6], 0);

                        ab_min_x = (work.projected[3] + work.projected[6] -
                                    fabsf(work.projected[6] - work.projected[3])) * half;
                        ab_min_y = (work.projected[4] + work.projected[7] -
                                    fabsf(work.projected[7] - work.projected[4])) * half;
                        ab_min_z = (work.projected[5] + work.projected[8] -
                                    fabsf(work.projected[8] - work.projected[5])) * half;
                        ab_max_x = (work.projected[3] + work.projected[6] +
                                    fabsf(work.projected[6] - work.projected[3])) * half;
                        ab_max_y = (work.projected[4] + work.projected[7] +
                                    fabsf(work.projected[7] - work.projected[4])) * half;
                        ab_max_z = (work.projected[5] + work.projected[8] +
                                    fabsf(work.projected[8] - work.projected[5])) * half;

                        min_x = (work.projected[0] + ab_min_x -
                                 fabsf(ab_min_x - work.projected[0])) * half;
                        min_y = (work.projected[1] + ab_min_y -
                                 fabsf(ab_min_y - work.projected[1])) * half;
                        min_z = (work.projected[2] + ab_min_z -
                                 fabsf(ab_min_z - work.projected[2])) * half;
                        max_x = (work.projected[0] + ab_max_x +
                                 fabsf(ab_max_x - work.projected[0])) * half;
                        max_y = (work.projected[1] + ab_max_y +
                                 fabsf(ab_max_y - work.projected[1])) * half;
                        max_z = (work.projected[2] + ab_max_z +
                                 fabsf(ab_max_z - work.projected[2])) * half;

                        radius = view->radius;
                        far_radius = view->forward + radius;
                        outside = radius < min_x || max_x < -radius ||
                                  radius < min_y || max_y < -radius ||
                                  far_radius < min_z || max_z < -radius;
                        if (!outside)
                            func_00D858(view, object, &work.local[0]);
                    }
                    ++indices;
                    --remaining;
                }
            }
        }
    }
}
