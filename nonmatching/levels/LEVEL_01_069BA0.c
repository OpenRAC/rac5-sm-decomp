/* Candidate LEVEL_01.REL:0x069BA0. Updates a three-state interpolation record. */
typedef unsigned long long u64;
typedef struct { float x, y, z; } Vec3;

extern float D_0020DE4C, D_0020DE48;
extern void func_0691B8(char *);
extern void func_069880(char *, int);

#define FL(o) (*(float *)(a0 + (o)))
#define IW(o) (*(int *)(a0 + (o)))

void func_069BA0(char *a0)
{
    int state = IW(0xe7c);
    float t, eased, remaining, bend;
    float squared, quartic;

    if (state == 2) goto state_two;
    if (state < 3) {
        if (state == 1) goto state_one;
        goto done;
    }
    if (state == 3) goto state_three;
    goto done;
state_one: {
    Vec3 interpolated;
        t = FL(0xf44);
        FL(0xf5c) = (D_0020DE4C - 1.0f) * t + 1.0f;
        FL(0xf60) = (D_0020DE48 - 0.8f) * t + 0.8f;
        if (t < 0.5f)
            eased = (t + t) * t;
        else {
            float inverse = 1.0f - t;
            eased = 1.0f - (inverse + inverse) * inverse;
        }
        remaining = 1.0f - eased;
        FL(0xf3c) = (FL(0xf34) - FL(0xf38)) * eased + FL(0xf38);
        squared = remaining * remaining;
        quartic = squared * squared + 0.0f;
        interpolated.x = (FL(0xf20) + FL(0xe64)) * remaining + FL(0xf14) * eased;
        interpolated.y = (FL(0xf24) + FL(0xe68)) * remaining + FL(0xf18) * eased;
        interpolated.z = (FL(0xf28) + FL(0xe6c)) * remaining + FL(0xf1c) * eased;
        FL(0xeec) = interpolated.x;
        FL(0xef0) = interpolated.y;
        FL(0xef4) = interpolated.z;
        FL(0xefc) = remaining * -0.5f;
        FL(0xeec) -= FL(0xe64) * quartic;
        FL(0xef0) -= FL(0xe68) * quartic;
        FL(0xef4) -= FL(0xe6c) * quartic;
        if (FL(0xf44) <= 0.6666666f) {
            t = FL(0xf44) * 1.5000001f;
            if (t < 0.5f)
                bend = (t + t) * t;
            else {
                float inverse = 1.0f - t;
                bend = 1.0f - (inverse + inverse) * inverse;
            }
            FL(0xf64) = FL(0xf70) + bend * -0.25f;
            FL(0xf6c) = FL(0xf78) + bend * 0.0f;
            FL(0xf68) = FL(0xf74) + bend * -0.5f;
            FL(0xf50) = 1.0f - t;
            *(u64 *)(a0 + 0xf10) |= 2;
        }
        if (FL(0xf44) <= 0.6666667f)
            func_069880(a0, 0);
    goto advance;
}
state_three:
        t = FL(0xf44);
        if (t < 0.5f)
            eased = (t + t) * t;
        else {
            float inverse = 1.0f - t;
            eased = 1.0f - (inverse + inverse) * inverse;
        }
        FL(0xf64) = FL(0xf70) + eased * -0.25f;
        FL(0xf68) = FL(0xf74) + eased * -0.5f;
        FL(0xf6c) = FL(0xf78) + eased * 0.0f;
        FL(0xf3c) = FL(0xf34) * (1.0f - eased);
        FL(0xf50) = 1.0f - FL(0xf44);
        FL(0xeec) = FL(0xf20) + FL(0xe64) * (eased * 0.5f);
        FL(0xef0) = FL(0xf24) + FL(0xe68) * (eased * 0.5f);
        FL(0xef4) = FL(0xf28) + FL(0xe6c) * (eased * 0.5f);
    goto advance;
state_two:
    FL(0xeec) = FL(0xf20);
    FL(0xef0) = FL(0xf24);
    FL(0xef4) = FL(0xf28);
    func_0691B8(a0);
    FL(0xf64) = FL(0xf70);
    FL(0xf68) = FL(0xf74);
    FL(0xf6c) = FL(0xf78);    goto done;
advance:
    FL(0xf44) += FL(0xf48);
done:
    return;
}
