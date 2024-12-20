// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
  int i;
  long long int min = -1;

  for (i = 1; i < n - 1; ++i) {
    if (A[i] <= A[i - 1] && A[i] <= A[i + 1])
      if (min == -1 || A[i] < min)
        min = A[i];
  }

  return min;
}
