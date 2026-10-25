# Sắp Xếp Mảng Bằng 1 Lần Hoán Vị (Sort an array in one swap whose two elements are swapped.cpp)

## Giải thích thuật toán

Chương trình tìm và hoán đổi lại đúng 2 phần tử bị sai vị trí trong một mảng (vốn đã được sắp xếp tăng dần) thông qua các bước sau:

1. **Khởi tạo**: Dùng hai biến `x = -1` và `y = -1` để lưu vị trí của hai phần tử cần hoán đổi.
2. **Duyệt mảng**: Duyệt qua mảng từ phần tử đầu tiên đến phần tử áp chót (`i` từ `0` đến `n-2`). Tại mỗi bước, kiểm tra xem có sự "ngược chiều" nào không (tức là phần tử đứng trước lớn hơn phần tử đứng sau `a[i] > a[i+1]`).
3. **Xác định vị trí lỗi**: Khi phát hiện sự ngược chiều:
   - Nếu là lần phát hiện đầu tiên (`x == -1`), ghi nhận `x = i` và `y = i + 1`. (Điều này xử lý trường hợp 2 phần tử bị đổi chỗ nằm kề nhau).
   - Nếu là lần phát hiện thứ hai (`x != -1`), cập nhật lại `y = i + 1`. (Điều này xử lý trường hợp 2 phần tử bị đổi chỗ không kề nhau: phần tử bị sai thứ nhất nằm ở `x` và phần tử bị sai thứ hai nằm ở `y` mới).
4. **Hoán vị**: Sau khi kết thúc vòng lặp, nếu cả `x` và `y` đều hợp lệ (khác `-1`), tiến hành đổi chỗ giá trị tại `a[x]` và `a[y]` để khôi phục mảng về trạng thái sắp xếp hoàn chỉnh.

### Độ phức tạp:

* **Độ phức tạp thời gian (Time Complexity)**: O(N) vì chương trình chỉ sử dụng một vòng lặp duy nhất để duyệt qua mảng (trong đó N là số lượng phần tử của mảng).

## Các Testcase Minh Họa

### Testcase 1: Hai phần tử bị đổi chỗ không kề nhau

* **Input:**

  * Các phần tử: `3, 8, 6, 7, 5, 9`

* **Output:**

  > A[] = [3, 5, 6, 7, 8, 9]

### Testcase 2: Hai phần tử bị đổi chỗ nằm kề nhau

* **Input:**

  * Các phần tử: `3, 5, 7, 6, 8, 9`

* **Output:**

  > A[] = [3, 5, 6, 7, 8, 9]