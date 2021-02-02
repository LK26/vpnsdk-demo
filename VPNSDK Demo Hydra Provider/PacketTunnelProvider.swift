//
//  PacketTunnelProvider.swift
//  VPNSDK Demo Hydra Provider
//
//  Created by Dan Vasilev on 26.01.2021.
//

import VPNTunnelProviderSDK

class PacketTunnelProvider: NSObject, AFNetworkExtensionDelegate {
    private let categorizationProcessor = CategorizationProcessor.default()

    func vpnWillStart(with options: StartupOptions!) {
        print("is bypass mode enabled = \(options.isBypassEnabled)")
    }

    func resourceBlocked(_ categorization: AFHydraCategorization!) {
        categorizationProcessor.process(categorization)
    }
}
