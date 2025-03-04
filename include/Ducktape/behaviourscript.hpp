#pragma once

class BehaviourScript
{
    public:
        bool enabled = true;
        GameObject* gameObject;
        // Transform transform;
        virtual void Start(UpdateEssentials* updateEssentials){;}
        virtual void Update(UpdateEssentials* updateEssentials){;}
        virtual void FixedUpdate(){}
        virtual void Invoke(std::string methodName, float time)
        {
            Debug::LogWarning("Invoke not Implemented yet.");
        }

        bool operator==(BehaviourScript script)
        {
            if(enabled == script.enabled && gameObject == script.gameObject /* && transform == script.transform*/)
            {
                return true;
            }
            return false;
        }
};