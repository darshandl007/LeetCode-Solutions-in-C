int missingMultiple(int* nums, int numsSize, int k)
{
    int multiple = k;

    while (1)
    {
        int flag = 0;

        // Search for the current multiple in the array
        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i] == multiple)
            {
                flag = 1;
                break;
            }
        }

        // If multiple is not present, return it
        if (flag == 0)
        {
            return multiple;
        }

        // Go to the next multiple
        multiple = multiple + k;
    }
}