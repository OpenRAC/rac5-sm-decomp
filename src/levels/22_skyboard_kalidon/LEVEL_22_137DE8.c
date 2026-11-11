float func_137DE8(float scale, float time, float value)
{
    float triangle;
    float square;
    float first;
    float second;
    if (time < 0.5f)
        triangle = time + time;
    else
        triangle = 1.0f - ((time - 0.5f) + (time - 0.5f));
    square = triangle * triangle;
    first = 1.0f - value;
    second = (((value + 0.0f) - 1.0f) - first) + 0.0f;
    return scale * (second * square * triangle +
                    ((first - 0.0f) - second) * square +
                    (1.0f - first) * triangle + 0.0f);
}
