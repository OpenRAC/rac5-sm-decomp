typedef unsigned char u8;
typedef unsigned int u32;

extern u8 *D_00027E9C;
extern float D_0003025C;
extern u8 D_00030260;
extern u32 *D_00030264;
extern signed char D_00030268;
extern u32 D_0003026C;
extern u32 D_00030270;
extern char D_0012D308[];
extern char D_0012D508[];
extern int D_0012D718;
extern int *D_0012D724;

extern u32 func_000240A0(float);
extern u32 *func_00014838(int, int, u32);
extern int func_000148E0(int, int, u32);
extern char *func_0001F778(u32);
extern void func_0000B5B0(char *, const char *, u32);
extern u32 strlen(const char *);

char *func_000149D0(int section, int offset, u32 time, u8 *wrapped)
{
    float scaled_time;
    int *range;
    u32 *record;
    char *text;
    u32 length;
    u32 budget;
    char *buffer;

    scaled_time = (float)time;
    time = func_000240A0((scaled_time * 30.0f) / 30.0f);
    if (*(int *)(D_00027E9C + 0xc) == 0 || section >= D_0012D718 - 1)
        return 0;

    range = D_0012D724 + section;
    if (offset + range[0] >= range[1])
        return 0;

    record = func_00014838(section, offset, time);
    if (record != 0) {
        if (D_00030264 != record) {
            D_00030260 = func_000148E0(section, offset, time);
            D_00030264 = record;
        }

        if (D_00030260 != 0) {
            text = func_0001F778(record[0]);
            func_0000B5B0(D_0012D508, text, 0x100);
            if (wrapped != 0)
                *wrapped = 1;
            return D_0012D508;
        }

        text = func_0001F778(record[0]);
        length = strlen(text);
        if (text == 0) {
            budget = 0;
        } else {
            u32 measured_length = strlen(text);
            budget = (u32)(int)((float)measured_length * D_0003025C);
        }
        if (budget < 90)
            budget = 90;

        if (time - record[1] < budget) {
            u32 start = 0;
            if (length >= 81) {
                u32 scan = 0;
                u32 exclamation = 0;
                u32 comma = 0;
                u32 space = 0;
                int characters = 0;
                const char *cursor = text;
                if (length != 0) {
                    do {
                        u32 candidate_exclamation = scan;
                        u32 candidate_comma = comma;
                        char ch;
                        if (*cursor == '.') {
                            if (cursor[1] != ' ') {
                                ch = *cursor;
                                goto classify;
                            }
                        } else {
                            ch = *cursor;
classify:
                            if (ch != '!') {
                                candidate_exclamation = exclamation;
                                candidate_comma = scan;
                                if (ch != ',') {
                                    candidate_comma = comma;
                                    if (ch == ' ')
                                        space = scan;
                                }
                            }
                        }

                        if (characters - (int)start > 79) {
                            u32 split = candidate_exclamation;
                            if (split < 16) {
                                split = candidate_comma;
                                if (split < 16)
                                    split = space;
                            }
                            if (start < split) {
                                u32 pixel_width = func_000240A0(D_0003025C * (float)split);
                                candidate_exclamation = 0;
                                if (time - record[1] < pixel_width) {
                                    length = split + 1;
                                    break;
                                }
                                start = split + 1;
                                candidate_comma = 0;
                                space = 0;
                            }
                        }
                        scan++;
                        characters++;
                        comma = candidate_comma;
                        exclamation = candidate_exclamation;
                        cursor++;
                    } while (scan < length);
                }
                buffer = D_0012D308 + ((int)D_00030268 * 128);
                func_0000B5B0(buffer, text + start, length - (start - 1));
            } else {
                buffer = D_0012D308 + ((int)D_00030268 * 128);
                func_0000B5B0(buffer, text, length + 1);
            }

            buffer = D_0012D308 + ((int)D_00030268 * 128);
            D_00030268 = (D_00030268 + 1) & 3;
            if (start != D_0003026C || length != D_00030270) {
                D_0003026C = start;
                D_00030270 = length;
            }
            if (wrapped != 0)
                *wrapped = 0;
            return buffer;
        }
    }
    if (wrapped != 0)
        *wrapped = 0;
    return 0;
}
