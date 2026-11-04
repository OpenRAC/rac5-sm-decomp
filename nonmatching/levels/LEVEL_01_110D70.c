/* Candidate LEVEL_01.REL:0x110D70. Geometry nearest-point test. */
typedef unsigned short u16;

typedef struct { float x, y, z; } Vec3;
typedef struct { float x, y, z, d; } Plane;
typedef struct {
    u16 vertex[3];
    u16 pad;
    Plane plane[4];
} Face;
typedef struct { int index[3]; } NeighborMap;

extern NeighborMap D_002176D8;

int func_110D70(float radius, Vec3 *out, const Face *face,
                const Vec3 *vertices, const Vec3 *point)
{
    float side[3];
    Vec3 projection;
    Vec3 candidate;
    NeighborMap neighbor;
    int first = -1;
    int second = -1;
    int next, choice;
    float distance;
    float dx, dy, dz;

    distance = face->plane[0].x * point->x +
               face->plane[0].y * point->y +
               face->plane[0].z * point->z + face->plane[0].d;
    if (distance > radius || distance < -radius)
        return 0;

    side[0] = face->plane[1].x * point->x +
              face->plane[1].y * point->y +
              face->plane[1].z * point->z + face->plane[1].d;
    if (side[0] > 0.0f) {
        if (side[0] > radius)
            return 0;
        first = 0;
    }
    side[1] = face->plane[2].x * point->x +
              face->plane[2].y * point->y +
              face->plane[2].z * point->z + face->plane[2].d;
    if (side[1] > 0.0f) {
        if (side[1] > radius)
            return 0;
        if (first == -1)
            first = 1;
        else
            second = 1;
    }
    if (second < 0) {
        side[2] = face->plane[3].x * point->x +
                  face->plane[3].y * point->y +
                  face->plane[3].z * point->z + face->plane[3].d;
        if (side[2] > 0.0f) {
            if (side[2] > radius)
                return 0;
            if (first == -1)
                first = 2;
            else
                second = 2;
        }
    }
    if (first < 0) {
        out->x = point->x - distance * face->plane[0].x;
        out->y = point->y - distance * face->plane[0].y;
        out->z = point->z - distance * face->plane[0].z;
        return 1;
    }
    if (second < 0) {
        projection.x = point->x - side[first] * face->plane[first + 1].x;
        projection.y = point->y - side[first] * face->plane[first + 1].y;
        projection.z = point->z - side[first] * face->plane[first + 1].z;
        neighbor = D_002176D8;
        next = neighbor.index[first];
        choice = next;
        if (face->plane[next + 1].x * projection.x +
            face->plane[next + 1].y * projection.y +
            face->plane[next + 1].z * projection.z +
            face->plane[next + 1].d >= 0.0f ||
            (next = neighbor.index[next], choice = first,
             face->plane[next + 1].x * projection.x +
             face->plane[next + 1].y * projection.y +
             face->plane[next + 1].z * projection.z +
             face->plane[next + 1].d >= 0.0f)) {
            candidate = vertices[face->vertex[choice]];
        } else {
            candidate.x = projection.x - distance * face->plane[0].x;
            candidate.y = projection.y - distance * face->plane[0].y;
            candidate.z = projection.z - distance * face->plane[0].z;
        }
        dx = candidate.x - point->x;
        dy = candidate.y - point->y;
        dz = candidate.z - point->z;
        if (dx * dx + dy * dy + dz * dz <= radius * radius) {
            *out = candidate;
            return 1;
        }
    } else {
        int vertexIndex;
        if (second == 1)
            vertexIndex = 1;
        else if (first == 0)
            vertexIndex = 0;
        else
            vertexIndex = 2;
        candidate = vertices[face->vertex[vertexIndex]];
        dx = candidate.x - point->x;
        dy = candidate.y - point->y;
        dz = candidate.z - point->z;
        if (dx * dx + dy * dy + dz * dz <= radius * radius) {
            *out = candidate;
            return 1;
        }
    }
    return 0;
}
