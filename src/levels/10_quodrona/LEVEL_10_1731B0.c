extern float func_173168(char *, int);

float func_1731B0(char *record)
{
    int state = *(int *)(record + 0xe4);
    if (state == -1)
        return 0.0f;
    return func_173168(record, state);
}