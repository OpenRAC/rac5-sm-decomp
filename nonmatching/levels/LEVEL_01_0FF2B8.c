/* Candidate particle emitter for LEVEL_01.REL:0x0FF2B8.
 * Field names reflect observed use; ownership and matching remain provisional.
 */
typedef unsigned int u32;

typedef struct {
    float base_x;
    float unused_04;
    float base_z;
    float unused_0c;
    float spread_z;
    float unused_14;
    u32 color;
    float velocity_spread;
    float unused_20;
    float base_y;
    float spread_y;
    float radius_spread;
    float color_scale;
} ParticleParameters;

typedef struct {
    char unused_00[0x14];
    int multiplier;
    u32 shift;
} ParticleFlags;

typedef struct {
    float origin_x;
    float origin_y;
    float origin_z;
    float near_radius;
    float far_radius;
    float x_scale;
    float yz_scale;
    ParticleParameters *parameters;
    ParticleFlags *flags;
} ParticleSettings;

typedef struct {
    float lifetime;
    float inverse_scale;
    float x;
    float y;
    float z;
    float velocity_x;
    float velocity_y;
    float velocity_z;
    float size;
    u32 color;
    u32 flags;
    ParticleFlags *config;
} Particle;

typedef struct {
    u32 first;
    u32 second;
} FlagPair;

typedef struct {
    FlagPair pair[8];
} FlagChoices;

extern u32 func_0978A8(void *owner);
extern void func_099350(u32 *word, int *value, u32 index);
extern Particle *func_097658(int *count, void *owner, int requested);
/* The retail calls the imported zeroing routine for each pair. */
extern void *clear_pair(void *dst, int value, unsigned int size) __asm__("memset");
extern int rand(void);
extern float cosf(float angle);
extern float sqrtf(float value);

#define ADVANCE_SEED() do { \
    float quotient = (float)(int)(seed * rng_inverse); \
    seed = __builtin_fabsf((seed - quotient * rng_modulus) * rng_multiplier \
                           - quotient * rng_subtract); \
} while (0)

void func_0FF2B8(void *owner, const ParticleSettings *settings, int requested)
{
    ParticleParameters *params = settings->parameters;
    ParticleFlags *config = settings->flags;
    float near_radius = settings->near_radius;
    float radius_range = (settings->far_radius - near_radius) * 4.656613e-10f;
    float base_x = params->base_x * settings->x_scale;
    float spread_x = params->base_y * settings->x_scale;
    float base_y = params->base_z;
    float spread_y = params->spread_y * settings->yz_scale;
    float base_z = params->spread_z * settings->yz_scale;
    float base_velocity = params->velocity_spread;
    float speed_spread = params->radius_spread;
    float velocity_range = params->color_scale;
    float red = (float)(params->color & 0xffu);
    float green = (float)((params->color >> 8) & 0xffu);
    float blue = (float)((params->color >> 16) & 0xffu);
    float origin_x = settings->origin_x;
    float origin_y = settings->origin_y;
    float origin_z = settings->origin_z;
    u32 word;
    int value;
    int shifted;
    int product;
    int upper;
    u32 half;
    u32 a, b, c, d;
    FlagChoices choices;
    FlagChoices initial;
    float seed;
    Particle *particles;
    int count;

    func_099350(&word, &value, (func_0978A8(owner) >> 16) & 0x7ffu);
    shifted = (value >> config->shift) << 16;
    product = shifted * config->multiplier;
    upper = product + shifted;
    half = word >> 1;
    a = half | product;

    clear_pair(&initial.pair[0], 0, 8);
    b = half | upper;
    initial.pair[0].first = product;
    initial.pair[0].second = b;
    d = word | upper;
    clear_pair(&initial.pair[1], 0, 8);
    c = word | product;
    initial.pair[1].first = upper;
    initial.pair[1].second = a;
    clear_pair(&initial.pair[2], 0, 8);
    initial.pair[2].first = a;
    initial.pair[2].second = upper;
    clear_pair(&initial.pair[3], 0, 8);
    initial.pair[3].first = b;
    initial.pair[3].second = product;
    clear_pair(&initial.pair[4], 0, 8);
    initial.pair[4].first = b;
    initial.pair[4].second = d;
    clear_pair(&initial.pair[5], 0, 8);
    initial.pair[5].first = a;
    initial.pair[5].second = c;
    clear_pair(&initial.pair[6], 0, 8);
    initial.pair[6].first = c;
    initial.pair[6].second = b;
    clear_pair(&initial.pair[7], 0, 8);
    initial.pair[7].first = d;
    initial.pair[7].second = a;
    choices = initial;

    seed = (float)rand();
    while (requested > 0 &&
           (particles = func_097658(&count, owner, requested), count != 0)) {
        char *record = (char *)particles;
        char *end = record + count * 0x30;
        float *payload = (float *)(record + 0x14);
        float rng_inverse = 7.826379e-06f;
        float rng_modulus = 127773.0f;
        float rng_multiplier = 16807.0f;
        float rng_subtract = 2836.0f;
        while (record != end) {
            float radius = near_radius + radius_range * seed;
            float px, py, pz, speed, vertical, angle, tone;
            float cosine, sine, radial, dx, dy;
            u32 color;
            u32 choice;
            FlagPair *selected;

            ADVANCE_SEED();
            px = base_x + spread_x * seed;
            ADVANCE_SEED();
            py = base_y + spread_y * seed;
            ADVANCE_SEED();
            speed = base_z + speed_spread * seed;
            ADVANCE_SEED();
            vertical = seed * 9.313226e-10f + -1.0f;
            ADVANCE_SEED();
            angle = seed * 2.9258362e-09f + -3.1415927f;
            ADVANCE_SEED();
            tone = base_velocity + velocity_range * seed;
            ADVANCE_SEED();
            choice = (u32)(int)(seed * 3.7252903e-09f) & 7u;

            cosine = cosf(angle);
            sine = __builtin_sqrtf(1.0f - cosine * cosine);
            if (angle < 0.0f)
                sine = -sine;
            radial = __builtin_sqrtf(1.0f - vertical * vertical);
            dx = cosine * radial;
            dy = sine * radial;
            selected = &choices.pair[choice];
            record += 0x30;

            payload[-5] = 0.0f;
            payload[3] = px;
            *(ParticleFlags **)(payload + 6) = config;
            payload[-4] = 1.0f / py;
            payload[2] = vertical * speed;
            payload[-3] = origin_x + dx * radius;
            payload[-2] = origin_y + dy * radius;
            payload[-1] = origin_z + vertical * radius;
            payload[0] = dx * speed;
            payload[1] = dy * speed;
            color = ((u32)(int)(blue * tone) << 16) |
                    ((u32)(int)(green * tone) << 8) |
                    (u32)(int)(red * tone);
            *(u32 *)(payload + 4) = color;
            *(u32 *)(payload + 5) = selected->first | (selected->second << 2);
            payload += 12;
        }
        requested -= count;
    }
}

#undef ADVANCE_SEED
