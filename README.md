# 🎮 AI-Based Enemy Finite State Machine (FSM) in Unreal Engine

A C++ implementation of an enemy AI using a Finite State Machine in Unreal Engine. The AI switches between **Patrol**, **Chase**, and **Attack** states based on player proximity and game context.

---

## 🧠 Features

- 🚶 **Patrol State**: Enemy follows predefined waypoints using navigation system.
- 👁️ **Chase State**: Detects and follows the player using perception logic (line of sight / distance).
- ⚔️ **Attack State**: Executes attacks when within melee or ranged range, with cooldown management.
- 🔁 Modular FSM architecture using C++ classes/interfaces.
- 🧩 Easily extendable to support additional states (e.g., Flee, Search, Idle).

---

## 🛠️ Technologies Used

- **Unreal Engine 5** (Blueprint + C++)
- **Unreal C++ AI Controller**
- **NavMesh for Pathfinding**
- **C++ State Pattern**
- **Behavior Debugging with Logs**

---

## 📷 Demo

> *(Optional: Insert GIFs or YouTube links of your AI in action. This boosts interest a lot.)*

---

## 📂 Project Structure

```plaintext
/AI_FSM_Project
│
├── AIController/
│   ├── EnemyAIController.cpp
│   ├── EnemyAIController.h
│
├── States/
│   ├── State.h (Base interface)
│   ├── PatrolState.cpp / .h
│   ├── ChaseState.cpp / .h
│   ├── AttackState.cpp / .h
│
├── EnemyCharacter/
│   ├── EnemyCharacter.cpp
│   ├── EnemyCharacter.h
