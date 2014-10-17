#include <libusb.h>

int main()
{
	libusb_device **devs = nullptr;

	int result = libusb_init(nullptr);
	if (result < 0) {
		return result;
	}

	ssize_t cnt = libusb_get_device_list(nullptr, &devs);
	if (cnt < 0) {
		return cnt;
	}

	libusb_free_device_list(devs, 1);

	libusb_exit(nullptr);
	return 0;
}