/* LEVEL_01:0x11C718 -- clips a ray interval against a list of planes. */
typedef struct Plane {
    float n[3];
    float d;
} Plane;

extern float fabsf(float x);

void func_11C718(float *outMin, float *outMax, float *a, float *b, Plane *planes, int count, float tmax, float r)
{
    Plane *p;
    Plane *end;
    float tmin;
    float s, num;
    float ax, ay, az, bx, by, bz;

    ax = a[0];
    ay = a[1];
    az = a[2];
    bx = b[0];
    by = b[1];
    bz = b[2];
    tmin = 0.0f;
    end = planes + count;
    for (p = planes; p != end; p++) {
        s = -(bx * p->n[0] + by * p->n[1] + bz * p->n[2]);
        if (fabsf(s) < 0.00048828125f) {
            continue;
        }
        num = p->d + (ax * p->n[0] + ay * p->n[1] + az * p->n[2]) - r;
        if (0.0f < s) {
            if (tmin * s < num) {
                if (num < tmax * s) {
                    tmax = num / s;
                }
            }
        } else {
            if (num < tmin * s) {
                if (tmax * s < num) {
                    tmin = num / s;
                }
            }
        }
    }
    *outMin = tmin;
    *outMax = tmax;
}
