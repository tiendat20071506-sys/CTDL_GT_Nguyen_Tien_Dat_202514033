# Thay Thế Phần Tử Bằng Tích Các Phần Tử Khác Không Dùng Phép Chia (Replace every array element with the product of every other element without using a division operator.cpp)

## Giải thích thuật toán

Chương trình tính toán tích của tất cả các phần tử khác mà không sử dụng toán tử chia bằng cách tách riêng việc tính tích các phần tử bên trái và bên phải của mỗi vị trí:

1. **Tính tích bên trái**: Sử dụng một mảng `ketqua` để lưu trữ. Phần tử đầu tiên `ketqua[0]` được gán bằng `1`. Duyệt mảng từ trái qua phải, tại mỗi bước cập nhật `ketqua[i] = mang[i - 1] * ketqua[i - 1]`. Sau vòng lặp này, `ketqua[i]` chứa tích của tất cả các phần tử nằm bên trái vị trí `i`.
2. **Tính tích bên phải và kết hợp**: Khởi tạo biến `tichphai = 1` để lưu tích các phần tử từ bên phải sang. Duyệt ngược mảng từ phải qua trái. Tại mỗi vị trí, nhân giá trị hiện tại của `ketqua[i]` (đang lưu tích bên trái) với `tichphai` để có kết quả cuối cùng. Sau đó, cập nhật `tichphai = tichphai * mang[i]` để chuẩn bị cho bước lặp tiếp theo.
3. **Cập nhật mảng gốc**: Sao chép các giá trị đã hoàn thiện từ mảng `ketqua` trở lại mảng `mang` ban đầu.

### Độ phức tạp:
- **Độ phức tạp thời gian (Time Complexity)**: O(N) vì chương trình duyệt qua mảng bằng các vòng lặp đơn độc lập (trong đó N là số lượng phần tử của mảng).

## Các Testcase Minh Họa

### Testcase 1
- **Input:**
  - Các phần tử: `1, 2, 3, 4, 5`
- **Output:**
  > { 120, 60, 40, 30, 24 }

### Testcase 2
- **Input:**
  - Các phần tử: `5, 3, 4, 2, 6, 8`
- **Output:**
  > { 1152, 1920, 1440, 2880, 960, 720 }