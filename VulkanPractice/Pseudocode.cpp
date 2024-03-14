/* 1. 인스턴스 레이어 속성 열거 */

// 인스턴스 레이어의 개수를 위한 변수 생성
uint32_t instanceLayerCount;

// 레이어의 개수를 반환하기 우해 2번째 파라미터로 NULL 사용
vkEnumerateInstanceLayerProperties(&instanceLayerCount, NULL);

vkLayerProperties* layerProperty = NULL;
vkEnumerateInstanceLayerProperties(&instanceLayerCount, layerProperty);

// 각 인스턴스 레이어에서 사용 가능한 확장판을 가져온다.
foreach layerProperty{
	VkExtensionProperties * instanceExtensions; // 확장팩 인스턴스 가져오기
	res = vkEnumerateInstanceExtensionProperties(layer_name, 
				&instanceExtensionCount, instanceExtensions);
}

/* 2. 인스턴스 생성 */
VkInstance instance;
VkInstanceCreateInfo instanceInfo = {};

// 실 프로젝트 후 다시 슈도코딩
