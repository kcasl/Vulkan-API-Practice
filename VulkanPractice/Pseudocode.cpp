/* 1. �ν��Ͻ� ���̾� �Ӽ� ���� */

// �ν��Ͻ� ���̾��� ������ ���� ���� ����
uint32_t instanceLayerCount;

// ���̾��� ������ ��ȯ�ϱ� ���� 2��° �Ķ���ͷ� NULL ���
vkEnumerateInstanceLayerProperties(&instanceLayerCount, NULL);

vkLayerProperties* layerProperty = NULL;
vkEnumerateInstanceLayerProperties(&instanceLayerCount, layerProperty);

// �� �ν��Ͻ� ���̾�� ��� ������ Ȯ������ �����´�.
foreach layerProperty{
	VkExtensionProperties * instanceExtensions; // Ȯ���� �ν��Ͻ� ��������
	res = vkEnumerateInstanceExtensionProperties(layer_name, 
				&instanceExtensionCount, instanceExtensions);
}

/* 2. �ν��Ͻ� ���� */
VkInstance instance;
VkInstanceCreateInfo instanceInfo = {};

// �� ������Ʈ �� �ٽ� �����ڵ�
