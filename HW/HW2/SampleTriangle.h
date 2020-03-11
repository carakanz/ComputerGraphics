#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include "../Common/AppBase.h"
#include "../Common/Model.h"

typedef struct PipelineDesc
{
    VezPipeline pipeline = VK_NULL_HANDLE;
    std::vector<VkShaderModule> shaderModules;
} PipelineDesc;

class SampleTriangle : public AppBase
{
public:
    SampleTriangle();

protected:
    void Initialize() final;
    void Cleanup() final;
    void Draw() final;
    void OnKeyUp(int key) final;
    void OnResize(int width, int height) final;
    void Update(float timeElapsed) final;

private:
    void CreateModel();
    void CreateSampler();
    void CreateUniformBuffer();
    void CreatePipeline();
    void CreateCommandBuffer();

    Model m_model;
    VkQueue m_graphicsQueue = VK_NULL_HANDLE;
    VkImage m_image = VK_NULL_HANDLE;
    VkImageView m_imageView = VK_NULL_HANDLE;
    VkSampler m_sampler = VK_NULL_HANDLE;
    VkBuffer m_uniformBuffer = VK_NULL_HANDLE;
    PipelineDesc m_basicPipeline;
    VkCommandBuffer m_commandBuffer = VK_NULL_HANDLE;
};
