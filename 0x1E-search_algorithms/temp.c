{
    size_t left = 0, right, step, i;
    step = sqrt(size);
    right = step;
    while (right < size && array[right - 1] <= value)
    {
        printf("Value checked array[%lu] = [%lu]\n", left, left);
        left = right;
        right = right + step;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", left, right);
    for (i = left; i < right; i++)
    {
        printf("Value checked array[%lu] = [%lu]\n", i, i);
        if (value == array[i])
            return (i);
    }
    return (-1);
    OB
}
