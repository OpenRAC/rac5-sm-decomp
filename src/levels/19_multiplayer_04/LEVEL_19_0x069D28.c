typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    Vec2 *pos;       /* 0x00 */
    float angle;     /* 0x04 */
    float pitch;     /* 0x08 */
    char pad[0x14];  /* 0x0C .. 0x1F */
    int flag;        /* 0x20 */
} State;

#define PI 3.1415927f
#define TWO_PI 6.2831855f

void func_069D28(State *s)
{
    float a = s->angle - s->pos->x;

    if (a > PI) {
        a = a - TWO_PI;
    } else if (a < -PI) {
        a = a + TWO_PI;
    }
    s->angle = a;
    if (s->flag != 0) {
        float b = s->pitch + s->pos->y;

        if (b > PI) {
            b = b - TWO_PI;
        } else if (b < -PI) {
            b = b + TWO_PI;
        }
        s->pitch = b;
    }
}
